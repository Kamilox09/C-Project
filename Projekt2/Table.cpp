#include "Table.hpp"
#include <iostream>

	 

	int Table::getN() {
		return this->n;
	}
	void Table::setN(int n) {
		this->n = n;
	}
	int** const Table::getBoard() {
		return this->board;
	}
	void Table::setBoard(int** board) {
		this->board = board;
	}
	void Table::changeSize(int k) {
	
		int** temp = new int*[k];
		int tempSize = this->n;
		this->n = k;
		for (int i = 0; i < k; i++)
			temp[i] = new int[k];
		if (k >= tempSize) {
			for (int i = 0; i < tempSize; i++)
				for (int j = 0; j < tempSize; j++)
					temp[i][j] = this->board[i][j];
			for (int i = 0; i < tempSize; i++)
				delete[] this->board[i];
			delete[] this->board;
			this->board = new int*[k];
			for (int i = 0; i < k; i++)
				this->board[i] = new int[k];
			fillCells();
			for (int i = 0; i < tempSize; i++)
				for (int j = 0; j < tempSize; j++)
					this->board[i][j] = temp[i][j];
			for (int i = 0; i < k; i++)
				delete[] temp[i];
			delete[] temp;
		}
		else {
			for (int i = 0; i < k; i++)
				for (int j = 0; j < k; j++)
					temp[i][j] = this->board[i][j];
			for (int i = 0; i < tempSize; i++)
				delete[] this->board[i];
			delete[] this->board;
			this->board = new int*[k];
			for (int i = 0; i < k; i++)
				this->board[i] = new int[k];
			fillCells();
			for (int i = 0; i < k; i++)
				for (int j = 0; j < k; j++)
					this->board[i][j] = temp[i][j];
			for (int i = 0; i < k; i++)
				delete[] temp[i];
			delete[] temp;
		}
	}
	void Table::fillCells() {
		for (int i = 0; i < this->n; i++)
			for (int j = 0; j < this->n; j++)
				this->board[i][j] = 0;
	}

	Table::Table(int n) {
		this->n = n;
		this->board = new int*[n];
		for (int i = 0; i < n; i++)
			this->board[i] = new int[n];
	}
	Table::~Table() {
		for (int i = 0; i < this->n; i++) {
			delete[] this->board[i];
		}
		delete[] this->board;
	}
	void Table::infect(int t, int prob) {
		Virus virus;
		this->board = virus.infectCells(this->board, this->n, t, prob);
	}
	void Table::increase() {
		Virus virus;
		this->board = virus.incBoard(this->board, this->n);
	}
	void Table::heal(int iT, int pT) {
		Virus virus;
		this->board = virus.healCells(this->board, this->n, iT, pT);
	}
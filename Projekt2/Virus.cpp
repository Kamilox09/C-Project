#include "Virus.hpp"
#include <iostream>




int** Virus::infectCells(int** board, int n, int t, int prob) {
	srand(time(NULL));
	int** tempBoard = board;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (tempBoard[i][j] > 1 && tempBoard[i][j] < t+1) {			
				if (i == 0 && j == 0) {
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][i + 1] == 0) {
							tempBoard[i][j + 1] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i + 1][j] == 0) {
							tempBoard[i + 1][j] = 1;
						}
					}
				}
				if (i == 0 && j != 0 && j != n - 1) {
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j - 1] == 0) {
							tempBoard[i][j - 1] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j + 1] == 0) {
							tempBoard[i][j + 1] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i + 1][j] == 0) {
							tempBoard[i + 1][j] = 1;
						}
					}
				}
				if (i == 0 && j == n - 1) {
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j - 1] == 0) {
							tempBoard[i][j - 1] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i + 1][j] == 0) {
							tempBoard[i + 1][j] = 1;
						}
					}
				}
				if (j == 0 && i != 0 && i != n - 1) {
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j + 1] == 0) {
							tempBoard[i][j + 1] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i + 1][j] == 0) {
							tempBoard[i + 1][j] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i - 1][j] == 0) {
							tempBoard[i - 1][j] = 1;
						}
					}
				}
				if (i != 0 && i != n - 1 && j != 0 && j != n - 1) {
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j + 1] == 0) {
							tempBoard[i][j + 1] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i + 1][j] == 0) {
							tempBoard[i + 1][j] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i - 1][j] == 0) {
							tempBoard[i - 1][j] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j - 1] == 0) {
							tempBoard[i][j - 1] = 1;
						}
					}
				}
				if (j == n - 1 && i != 0 && i != n - 1) {
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i + 1][j] == 0) {
							tempBoard[i + 1][j] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i - 1][j] == 0) {
							tempBoard[i - 1][j] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j - 1] == 0) {
							tempBoard[i][j - 1] = 1;
						}
					}
				}
				if (i == n - 1 && j == 0) {
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i - 1][j] == 0) {
							tempBoard[i - 1][j] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j + 1] == 0) {
							tempBoard[i][j + 1] = 1;
						}
					}
				}
				if (i == n - 1 && j != 0 && j != n - 1) {
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i - 1][j] == 0) {
							tempBoard[i - 1][j] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j + 1] == 0) {
							tempBoard[i][j + 1] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j - 1] == 0) {
							tempBoard[i][j - 1] = 1;
						}
					}
				}
				if (i == n - 1 && j == n - 1) {
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i][j - 1] == 0) {
							tempBoard[i][j - 1] = 1;
						}
					}
					if (rand() % 100 <= prob - 1) {
						if (tempBoard[i - 1][j] == 0) {
							tempBoard[i - 1][j] = 1;
						}
					}
				}
			}
		}
	}
	return tempBoard;
}

int** Virus::incBoard(int** board, int n) {
	int** tempBoard = board;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (tempBoard[i][j] > 0) {
				tempBoard[i][j]++;
			}
		}
	}
	return tempBoard;
}

int** Virus::healCells(int** board, int n, int iT, int pT) {
	int** tempBoard = board;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (tempBoard[i][j] >= (iT+pT+1)) {
				tempBoard[i][j] = 0;
			}
		}
	}
	return tempBoard;
}

#include <iostream>  
using namespace std;

void drawTriangle(int num, int size, char brush);  //draw hollow triangles side by side
void drawFlippedTriangle(int num, int size, char brush);  
void drawCircle();

int main() {
	int numTriangles, size;
	char c, answer;

	cout << "Welcome! You will get to draw your own shape(s)!\n"; 

	//drawCircle();
	
	do {
		cout << "\n\nPlease enter how many triangles you want to draw: ";
		cin >> numTriangles;
		getchar();
		cout << "Please enter the triangle size: ";
		cin >> size;
		getchar();
		cout << "Please enter the brush type you will use (any character from the keyboard): ";
		cin >> c;
		getchar();

		cout << "Would you like your triangles flipped? (y or n): ";
		cin >> answer;
		getchar();

		while (answer != 'n' && answer != 'y') {
			cout << "Please enter (y)es or (n)o: ";
			cin >> answer;
			getchar();
		}

		cout << "\nYour drawing is finished: \n\n";

		if (answer == 'y')	drawFlippedTriangle(numTriangles, size, c);
		else  drawTriangle(numTriangles, size, c);

		cout << "\n\nWould you like to draw some more triangles? (y or n): ";
		cin >> answer;
		getchar();

		while (answer != 'n' && answer != 'y') {
			cout << "Please enter (y)es or (n)o: ";
			cin >> answer;
			getchar();
		}

	} while (answer != 'n');

	//getchar();
	return 0;
}

void drawTriangle(int num, int size, char brush) {
	int i, j, len = size * num, n = num;

	for (i = 1; i < size; i++) {									//prints each line of the triangles
		for (n = num; n > 0; n--) {									//prints each triangle part on the line
			for (j = size - i; j > 0; j--) cout << " ";
			cout << brush;

			if (i == 1) {
				for (j = size - i; j >= 0; j--) cout << " ";
				continue;
			}

			for (j = 1; j < 2 * (i - 1); j++) cout << " ";			
			cout << brush;

			if (n != 1) for (j = size - i; j >= 0; j--) cout << " ";
		}

		cout << endl;
	}

	for (i = 0; i < len ; i++)  cout << brush << " ";
	
}

void drawFlippedTriangle(int num, int size, char brush) {
	int i, j, len = size * num, n = num;

	for (j = 1; j <= len; j++) cout << brush << " ";
	cout << endl;

	for (i = 1; i < size; i++) {									//prints each line of the triangles
		for (n = num; n > 0; n--) {									//prints each triangle part on the line
			for (j = 1; j <= i; j++) cout << " ";
			cout << brush;

			if (i == size - 1) {
				if (n != 1) for (j = i; j >= 0; j--) cout << " ";
				continue;
			}

			for (j = 2 * (size - i); j > 3; j--) cout << " ";
			cout << brush;

			if (n != 1) for (j = i; j >= 0; j--) cout << " ";
		}

		cout << endl;
	}
}

void drawCircle() {

	int size = 6, num = size + 1, num2 = 0, left = 0, right = 0, i = 0, j = 0, oddNess = 0;

	for (i = 0; i <= size; i++) {
		left += num;
		cout << left << endl;
		num--;
	}

	num += size + 1;
	num2 = left;
	right = 2;
	cout << endl;

	for (i = 0; i < size + 2; i++) {
		cout << " ";
		for (j = 0; j < left; j++)
			cout << " ";

		cout << "*";

		for (j = 0; j < right; j++)
			cout << " ";

		cout << "*\n";

		if (i == size + 2) break;
		left -= num;
		right += (num * 2);
		num--;
	}

	num = 1;

	for (i = 0; i <= (size); i++) {
		if (i == 0) {
			cout << endl;
		}

		else {
			for (j = 0; j < left; j++)
				cout << " ";

			cout << "*";

			for (j = 0; j <= right; j++)
				cout << " ";

			if (i < size / 2) for (j = 0; j < i; j++) cout << " ";

			cout << " *\n\n";
		}
		
	}

	for (i = 0; i < size + 2; i++) {
		cout << " ";
		for (j = 0; j < left; j++)
			cout << " ";

		cout << "*";

		for (j = 0; j < right; j++)
			cout << " ";

		cout << "*\n";

		left += num;
		right -= (num * 2);
		num++;

		
	}


	/*cout << "														                                ";
	cout << "								          *  *  				                                ";
	cout << "                                     *          *                                         ";
	cout << "                                  *                *                                 ";
	cout << "                                *                    *                               ";
	cout << "                               *                      *                               ";
	cout << "                               *                      *                              ";
	cout << "                               *                      *                                  ";
	cout << "                                *                    *                                  ";
	cout << "                                  *                *                            ";
	cout << "                                     *          *                              ";
	cout << "                                         *  *                                                      ";
	cout << "                                                                                  ";
	cout << "                                                                                 ";
	cout << "                                                                                 ";
	cout << "                                                                                 ";
	cout << "                                                     *  *                           ";
	cout << "										           *        *                          ";
	cout << "												 *            *                         ";
	cout << "												*              *                           ";
	cout << "                                               *              *                     ";
	cout << "												 *            *                               ";
	cout << "                                                  *        *                                  ";
	cout << "                                                     *  *                                   ";
	cout << "                                                                                 ";
	cout << "                                                                                 ";
	cout << "                                                     *  *                            ";
	cout << "                                                   *      *                       ";
	cout << "                                                  *        *                     ";
	cout << "                                                   *      *                      ";
	cout << "                                                     *  *                         ";
	cout << "                                                                                 ";
	cout << "                                                                                 ";
	cout << "                                                *  *                               ";
	cout << "                                           *            *                             ";
	cout << "                                       *                    *                  ";
	cout << "                                    *                          *            ";
	cout << "                                  *                              *                            ";
	cout << "                                 *                                *                            ";
	cout << "                                 *                                *                            ";
	cout << "                                 *                                *                   ";
	cout << "                                 *                                *                   ";
	cout << "                                  *                              *                                  ";
	cout << "                                    *                          *                             ";
	cout << "                                       *                    *              ";
	cout << "                                           *            *                       ";
	cout << "                                                *  *                                ";
	cout << "                                                                                 ";
	cout << "                                                                                 ";
	cout << "                                                                                 ";
	cout << "                                                                                 ";*/

}

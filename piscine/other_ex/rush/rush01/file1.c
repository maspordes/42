/*/ we need to have a program that can check number by number
// if this number is a one digit number (< 10) (!= 6)// only
// six is a number under 10 that is not a prime number.
// so, the moment we find that we are in front of a prime number,
// we have to analyze all the numbers in the row and column where this 
// prime number is located; and do the modulo (%) of this numbers, in this
// rows and columns; to see if they contain this prime number inside
// of the number stored in any of this rows or columns.
// 	The moment we find that some of this numbers are divisible by 
// this prime number, then we would divide this number by this prime number,
// to leave this row and column out of probabiliy of having this number within.

int	pos;
int	matrix[4][4];
int	i = 0; //coordinate for columns on the grid
int	j = 0; //coordinate for rows on the grid
int	one = 2;
int	two = 3;
int	three = 5;
int	four = 7;


// the matrix at the beginning will look like this:
// /////////////////
// 210 210 210 210// We need that this 210's become into prime numbers (2, 3, 5, 7)  
//	          //
// 210 210 210 210//	
//	          //
// 210 210 210 210//
//	          //
// 210 210 210 210//		
////////////////////

int	k = 0; //coordinates for the columns on the part of the grid we are checking
int	l = 0; //coordinates for the rows on the part of the grid we are checking


	i = 0;
	while (i < 4)
	{	
		if (i != k && j != l)
		{
			if (matrix[i][j] < 10 && matrix[i][j] != 6)
			{
				if (matrix[i][j] % matrix[k][l] == 0)
				{
					matrix[i][j] = matrix[i][j] / matrix[k][l];	
				}
			}
		}
		i++;	
	}
*/		
int k = 1; // Row of the given number
int l = 1; // Column of the given number

// Iterate over columns in the given row
int j = 0;
while (j < 4) {
    if (j != l) { // Skip the given number itself
        if (matrix[k][j] % matrix[k][l] == 0) {
            matrix[k][j] = matrix[k][j] / matrix[k][l];
        }
    }
    j++;
}

// Iterate over rows in the given column
int i = 0;
while (i < 4) {
    if (i != k) { // Skip the given number itself
        if (matrix[i][l] % matrix[k][l] == 0) {
            matrix[i][l] = matrix[i][l] / matrix[k][l];
        }
    }
    i++;
}

/////////////////////////////////////////////////////////////////
///
///

// to begin we need to start analyzing each position of the array
// we go row by row column by column
// we see if the number that we are analyzing is a prime number
// if the number is a prime number, we take the location of this number
// with the location of this number, we analize its row and column
// in that row and column we have to find that same prime number
// if we find that same prime number, we divide that location by that prime num
// we continue until all numbers in the array of column and row are done
// when we are finished checking for that number, we continue the search for another prime num
// when we find another prime num, we do the same, and check its rows and columns..
// when the matrix has been inspected we come back to the begining

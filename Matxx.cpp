//.h file code:

#include <string>
#include <vector>
#include <iostream>
//#include <rectangularvectors.h>
using namespace std;

class MatrixMultiplication
{
  public:
  static void main(std::vector<std::wstring> &args);

};

//Helper class added by Java to C++ Converter:

#include <string>
#include <vector>

int main(int argc, char **argv)
{
    std::vector<std::wstring> args(argv + 1, argv + argc);
    MatrixMultiplication::main(args);
}

//Helper class added by Java to C++ Converter:

//----------------------------------------------------------------------------------------
//	Copyright © 2007 - 2020 Tangible Software Solutions, Inc.
//	This class can be used by anyone provided that the copyright notice remains intact.
//
//	This class includes methods to convert multidimensional arrays to C++ vectors.
//----------------------------------------------------------------------------------------
#include <vector>

class RectangularVectors
{
public:
    static std::vector<std::vector<int>> RectangularIntVector(int size1, int size2)
    {
        std::vector<std::vector<int>> newVector(size1);
        for (int vector1 = 0; vector1 < size1; vector1++)
        {
            newVector[vector1] = std::vector<int>(size2);
        }

        return newVector;
    }
};

//.cpp file code:

//#include "snippet.h"

//using Duration = java::time::Duration;
//using Instant = java::time::Instant;
//using Scanner = java::util::Scanner;

void MatrixMultiplication::main(std::vector<std::wstring> &args)

{
  // Instant start = Instant.now();
//  long long startTime = System::currentTimeMillis();
  int m1, n1, i, j, sum = 0, x, y, k, m2, n2;

  std::scanf *in = new Scanner(System::in);
  std::wcout << L"Enter the number of rows and columns of first matrix" << std::endl;
  m1 = in->nextInt();
  n1 = in->nextInt();

//JAVA TO C++ CONVERTER NOTE: The following call to the 'RectangularVectors' helper class reproduces the rectangular array initialization that is automatic in Java:
//ORIGINAL LINE: int arr1[][] = new int[m1][n1];
  std::vector<std::vector<int>> arr1 = RectangularVectors::RectangularIntVector(m1, n1);

  std::wcout << L"Enter elements of first matrix" << std::endl;

  for (i = 0; i < m1; i++)
  {
	for (j = 0; j < n1; j++)
	{
	  arr1[i][j] = in->nextInt();
	}
  }

  std::wcout << L"Enter the number of rows and columns of second matrix" << std::endl;
  m2 = in->nextInt();
  n2 = in->nextInt();

  if (n2 != m2)
  {
	std::wcout << L"The matrices can't be multiplied with each other." << std::endl;
  }
  else
  {
//JAVA TO C++ CONVERTER NOTE: The following call to the 'RectangularVectors' helper class reproduces the rectangular array initialization that is automatic in Java:
//ORIGINAL LINE: int arr2[][] = new int[m2][n2];
	std::vector<std::vector<int>> arr2 = RectangularVectors::RectangularIntVector(m2, n2);
//JAVA TO C++ CONVERTER NOTE: The following call to the 'RectangularVectors' helper class reproduces the rectangular array initialization that is automatic in Java:
//ORIGINAL LINE: int multiply[][] = new int[m1][n2];
	std::vector<std::vector<int>> multiply = RectangularVectors::RectangularIntVector(m1, n2);

	std::wcout << L"Enter elements of second matrix" << std::endl;

	for (x = 0; x < m2; x++)
	{
	  for (y = 0; y < n2; y++)
	  {
		arr2[x][y] = in->nextInt();
	  }
	}

	for (i = 0; i < m1; i++)
	{
	  for (j = 0; j < n2; j++)
	  {
		for (k = 0; k < n1; k++)
		{
		  sum = 0;
		  sum = sum + arr1[i][k] * arr2[k][j];
		  multiply[i][j] = sum;

		}
	  }
	}

	std::wcout << L"Product of the matrices:" << std::endl;

	for (i = 0; i < m1; i++)
	{
	  for (j = 0; j < n2; j++)
	  {
		std::wcout << multiply[i][j] << L"\t";
	  }

	  std::wcout << L"\t\n";


	}
  }
  //Instant end = Instant.now();
  //Duration interval = Duration.between(start, end);
  //System.out.println("Execution time is: "+interval.getSeconds());
  long long endTime = System::currentTimeMillis();
  long long diff = endTime - startTime;
  std::wcout << L"Execution time is: " << std::endl;
  std::wcout << diff << std::endl;

	delete in;
}

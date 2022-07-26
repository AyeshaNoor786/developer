# include<iostream>

using namespace std;

class Matrix
{
private:
	int *m;
	int rows;
	int columns;
public:
	Matrix();
	Matrix(const int);
	Matrix(const int, const int);
	Matrix(const Matrix&);
	Matrix& operator=(const Matrix&);
	~Matrix();
	Matrix& operator+(const Matrix&);
	Matrix& operator-(const Matrix&);
	void Get();
	void Put();

};

Matrix::Matrix()
{
	rows = 0;
	columns = 0;
	m = NULL;
}

Matrix::Matrix(const int order)
{
	m = new int[order*order];
	rows = order;
	columns = order;
}

Matrix::Matrix(const int rows, const int columns)
{
	m = new int[rows*columns];
	this->rows = rows;
	this->columns = columns;
}

Matrix::Matrix(const Matrix &oo)
{
	rows = oo.rows;
	columns = oo.columns;
	m = new int[rows*columns];
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<columns; j++)
		{
			m[i + j*rows] = oo.m[i + j*rows];
		}
	}
}

Matrix& Matrix::operator=(const Matrix &rhs)
{
	if (this != &rhs)
	{
		delete[] m;
		
		rows = rhs.rows;
		columns = rhs.columns;
		m = new int[rows*columns];
		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<columns; j++)
			{
				m[i + j*rows] = rhs.m[i + j*rows];
			}
		}
	}
	return *this;
}

Matrix::~Matrix()
{
	delete[] m;
}

Matrix& Matrix::operator+(const Matrix &rhs)
{
	if (rows == rhs.rows && columns == rhs.columns)
	{
		Matrix *ro = new Matrix(rhs.rows, rhs.columns);
		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<columns; j++)
			{
				ro->m[i + j*rows] = m[i + j*rows] + rhs.m[i + j*rows];
			}
		}
		return *ro;
	}
	else
	{
		throw -1;
	}
}

Matrix& Matrix::operator-(const Matrix &rhs)
{
	if (rows == rhs.rows && columns == rhs.columns)
	{
		Matrix *ro = new Matrix(rhs.rows, rhs.columns);
		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<columns; j++)
			{
				ro->m[i + j*rows] = m[i + j*rows] - rhs.m[i + j*rows];
			}
		}
		return *ro;
	}
	else
	{
		throw -1;
	}
}

void Matrix::Get()
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<columns; j++)
		{
			cin >> m[i + j*rows];
		}
	}
}

void Matrix::Put()
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<columns; j++)
		{
			cout << m[i + j*rows] << " ";
		}
		cout << endl;
	}
}

int main()
{
	Matrix p(3, 2), q(3, 2);
	cout << "Enter the elements of two (3 X 2) matrices " << endl;
	cout << endl;
	p.Get();
	q.Get();
	cout << endl;

	cout << "First matrix is :" << endl;
	p.Put();
	cout << endl;

	cout << "Second matix is :" << endl;
	q.Put();
	cout << endl;

	Matrix k = p + q;
	cout << "Sum of above two matrices is : " << endl;
	k.Put();
	cout << endl;

	cout << "Difference of above two matrices is : " << endl;
	Matrix r;
	r = p - q;
	r.Put();
	
	return 0;
}

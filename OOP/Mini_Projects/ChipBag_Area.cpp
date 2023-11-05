#include <iostream> 

using namespace std;

void input(int *l, int *w);
void calculation(int *l, int *w, int *a);
void chips(int *a, double *chipbags);
void print(int *a, double *chipbags);

int main()
{

    int l, w, a;
    double chipbags;

    input(&l, &w);
    cout << endl;
    calculation(&l, &w, &a);
    cout << endl;
    chips(&a, &chipbags);
    cout << endl;
    print(&a, &chipbags);




}

void input(int *pl, int *pw)
{

    cout << "Garden Informaiton" << endl;
    cout << endl;

    cout << "Enter length: ";
    cin >> *pl;

    cout << "Enter Width: ";
    cin >> *pw;

}

void calculation(int *pl, int *pw, int *a)
{
    *a = (*pl)*(*pw);
}

void chips(int *a, double *chipbags)
{

    *chipbags=(*a)/9;

}

void print(int *a, double *chipbags)
{

    cout << "Area of Garden: " << *a << endl;
    cout << "Number of Chip Bags: " << *chipbags << endl;


}

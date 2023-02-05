#include <bits/stdc++.h>
// By Anusthan Singh 20051337
using namespace std;

class kitab
{
    string author, title, publisher;
    int price, stock;

public:

    kitab() {}

    kitab(string a, string t, string p, int m, int s)
    {
        author = a;
        title = t;
        publisher = p;
        price = m;
        stock = s;
    }

    friend void searchforBook(kitab *b, int n, string t, string a);
};

void searchforBook(kitab *b, int n, string t, string a)
{
    for (int i = 0; i < n; i++)
    {
        if (b[i].author == a && b[i].title == t)
        {
            if (b[i].stock <= 0)
            {
                cout << "The required book is not Found ,Sorry!!!\n";
                return;
            }
            else
            {
                 cout<<"\n*******************Billing *******************************\n";
                
                cout << b[i].title << " by " << b[i].author << " published by " << b[i].publisher << "\n";
                cout << "Price : " << b[i].price << "\n";
                cout << "Enter the required amount of books = \t";
                int no;
                cin >> no;
                if (b[i].stock >= no)
                {
                    int bill = no * b[i].price;
                    cout << "Your bill is = " << bill << "\n";
                    b[i].stock -= no;
                    cout << "Visit again :) bye! \n";
                    return;
                }
                else
                {
                    cout << "Sorry!! We don't have the required amount of this book. Visit again :)\n";
                    return;
                }
            }
        }
        if (i == n - 1)
        {
            cout << "Never heard of this book. Sorry!!\n";
            cout << "Visit again :')\n";
            return;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the total no. of distinct books available in the book store(Input) :- ";
    cin >> n;
    kitab *b = new kitab[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"\n***************************************************************\n";
        string a, t, p;
        int m, s;
        cout<<"\nEnter the price and stock of the book :- ";
        cin >> m >> s;
        cout<<"\n";
        getchar();
        cout<<"\nEnter the name of the author of the book :- ";
        getline(cin, a);
        cout<<"\n";
        cout<<"\nEnter the name of the book :- ";
        getline(cin, t);
        cout<<"\n";
        cout<<"\nEnter the publisher name of the book :- ";
        getline(cin, p);
        b[i] = kitab(a, t, p, m, s);
    }

    string st,sa;

    cout<<"\n***************************************************************\n";

    cout<<"Enter the name of the book you wish to search :- ";
    getline(cin, st);
    cout<<"Enter the name of the author of the book you wish to search :- ";
    getline(cin, sa);

    cout<<"\n***************************************************************\n";

    searchforBook(b ,n, st, sa);

    time_t now = time(0);
    char* date_time = ctime(&now);
    cout<< "\n "<< date_time << endl;

    cout<<"Inovice number "<<rand();

    cout<<"\n****************************************************************\n";

    cout<<"The Program is runned successfully!! ;)\n";
    

    return 0;
}
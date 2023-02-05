#include <bits/stdc++.h>

using namespace std;

class Books_150
{
    string author_150, title_150, publisher_150;
    int price_150, stock_150;

public:

    Books_150() {}

    Books_150(string a_150, string t_150, string p_150, int m_150, int s_150)
    {
        author_150 = a_150;
        title_150 = t_150;
        publisher_150 = p_150;
        price_150 = m_150;
        stock_150 = s_150;
    }

    friend void searchBooks_150(Books_150 *b_150, int n_150, string t_150, string a_150);
};

void searchBooks_150(Books_150 *b_150, int n_150, string t_150, string a_150)
{
    for (int i = 0; i < n_150; i++)
    {
        if (b_150[i].author_150 == a_150 && b_150[i].title_150 == t_150)
        {
            if (b_150[i].stock_150 <= 0)
            {
                cout << "The required book is not available!! Sorry!!\n";
                return;
            }
            else
            {
                cout << b_150[i].title_150 << " by " << b_150[i].author_150 << " published by " << b_150[i].publisher_150 << "\n";
                cout << "Cost : " << b_150[i].price_150 << "\n";
                cout << "Enter the required amount of books :- ";
                int no_150;
                cin >> no_150;
                if (b_150[i].stock_150 >= no_150)
                {
                    int bill = no_150 * b_150[i].price_150;
                    cout << "Your bill is :- " << bill << "\n";
                    b_150[i].stock_150 -= no_150;
                    cout << "Visit again :)\n";
                    return;
                }
                else
                {
                    cout << "Sorry!! We don't have required amount of this book. Visit again :)\n";
                    return;
                }
            }
        }
        if (i == n_150 - 1)
        {
            cout << "Never heard of this book. Sorry!!\n";
            cout << "Visit again :)\n";
            return;
        }
    }
}

int main()
{
    int n_150;
    cout<<"Enter the total number of distinct books available in the book store :- ";
    cin >> n_150;
    Books_150 *b_150 = new Books_150[n_150];

    for (int i = 0; i < n_150; i++)
    {
        cout<<"\n================================================================\n";
        string a_150, t_150, p_150;
        int m_150, s_150;
        cout<<"\nEnter the price and stock of the book :- ";
        cin >> m_150 >> s_150;
        cout<<"\n";
        getchar();
        cout<<"\nEnter the name of the author of the book :- ";
        getline(cin, a_150);
        cout<<"\n";
        cout<<"\nEnter the name of the book :- ";
        getline(cin, t_150);
        cout<<"\n";
        cout<<"\nEnter the publisher name of the book :- ";
        getline(cin, p_150);
        b_150[i] = Books_150(a_150, t_150, p_150, m_150, s_150);
    }

    string st_150,sa_150;

    cout<<"\n================================================================\n";

    cout<<"Enter the name of the book you wish to search :- ";
    getline(cin, st_150);
    cout<<"Enter the name of the author of the book you wish to search :- ";
    getline(cin, sa_150);

    cout<<"\n================================================================\n";

    searchBooks_150(b_150 ,n_150, st_150, sa_150);

    cout<<"\n================================================================\n";

    cout<<"The Program is terminated successfully!! ;)\n";
    

    return 0;
}
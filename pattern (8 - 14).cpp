#include <iostream>
using namespace std;
int main()
{

    cout << "Pattern (8 -- 14) IMP Questions" << endl;

    // 8. Butterfly Pattern

    int n;
    cout << "Please enter the number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int empty_space = 2 * n - 2 * i;
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= empty_space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = n; i >= 1; i--)
    {
        int empty_space = 2 * n - 2 * i;
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= empty_space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    // 9. Hollow Butterfly Pattern

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     int empty_space = 2 * n - 2 * i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (j == 1 || j == i)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     for (int j = 1; j <= empty_space; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (j == 1 || j == i)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << "\n";
    // }
    // for (int i = n; i >= 1; i--)
    // {
    //     int empty_space = 2 * n - 2 * i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (j == 1 || j == i)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     for (int j = 1; j <= empty_space; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (j == 1 || j == i)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << "\n";
    // }

    // 10. Inverted Pattern
    // 1st Method
    // int n;
    // cout << "Enter Number" << endl;
    // cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }

    //     cout << endl;
    // }

    // 2nd Method
    // int n;
    // cout << "Enter Number" << endl;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n+1-i; j++)
    //     {
    //         cout << j << " ";
    //     }

    //     cout << endl;
    // }

    // 11. Print 0-1 pattern
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //             cout << " 1";
    //         else
    //             cout << " 0";
    //     }
    //     cout << endl;
    // }

    // 12. Print Solid Rhombus
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // 13. Pyramid Pattern for Numbers - 2

    // 1st Method
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }

    // 2nd Method
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     int space = n - i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }

    // 3rd Method
    // int n;
    // cin >> n;
    // int space = n - 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     space--;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }

    // 14. Print Hollow Rhombus
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i == 1 || i == n)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             if (j == 1 || j == n)
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << "\n";
    // }

    return 0;
}

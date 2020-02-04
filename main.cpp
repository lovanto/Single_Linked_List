#include <iostream>
#include "list.cpp"

using namespace std;

/*
Name : Rifky Lovanto
NIM : 1302194068
*/

int main()
{
    List listData;
    int xInput;
    address P;
    createList(listData);

    cout << "Insert first" << endl;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Input data list " << i << " : " << endl;
        cin >> xInput;
        insertFirst(listData, allocate(xInput));
        printInfo(listData);
        cout << endl;
    }
    cout << "Delete first" << endl;
    deleteFirst(listData, P);
    printInfo(listData);
    cout << endl;

    cout << "Insert last" << endl;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Input data list " << i << " : " << endl;
        cin >> xInput;
        insertLast(listData, allocate(xInput));
        printInfo(listData);
        cout << endl;
    }
    cout << "Delete Last" << endl;
    deleteLast(listData, P);
    printInfo(listData);
    cout << endl;

    cout << "Insert after Try" << endl;
    cout << "Here's your data!" << endl;
    printInfo(listData);
    cout << endl;
    cout << "Search data!" << endl;
    cin >> xInput;
    if (searchInfo(listData, xInput))
    {
        cout << "Data found. Entry the next data! ";
        cin >> xInput;
        insertAfter(listData, allocate(xInput));
    }else
    {
        cout << "Data not found.";
    }
    printInfo(listData);
    cout << endl;

    cout << "Delete After" << endl;
    cout << "Here's your data!" << endl;
    printInfo(listData);
    cout << endl;
    cout << "Search data!" << endl;
    cin >> xInput;
    if (searchInfo(listData, xInput))
    {
        deleteAfter(listData, xInput);
        cout << "Data found and data has been deleted! ";
    }else
    {
        cout << "Data not found.";
    }
    printInfo(listData);
    cout << endl;

    cout << "Insert nim using last" << endl;
    clearList(listData);
    for (int i = 1; i <= 10; i++)
    {
        cin >> xInput;
        insertLast(listData, allocate(xInput));
    }
    printInfo(listData);
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

void insert_at_beginning(int arr[], int num, int size)
{
    for (int i = size; i >= 0; i--)
    {
        if (i == 0)
        {
            arr[i] = num;
        }
        else
        {
            arr[i] = arr[i - 1];
        }
    }
    cout << endl
         << "use less" << endl;
}
void insert_at_end(int arr[], int num, int size)
{
    arr[size - 1] = num;
}
void insert_at_random_pos(int arr[], int num, int size, int position)
{

    for (int i = size; i >= position; i--)
    {
        if (i == position)
        {
            arr[i] = num;
        }
        else
        {
            arr[i] = arr[i - 1];
        }
    }
    cout << endl
         << "use less" << endl;
}

void delete_element(int arr[], int pos, int size)
{
    for (int i = pos - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main(int argc, char const *argv[])
{
    int n = 100, arr[n], choice = 0, size;
    cout << "This is a Array First program" << endl;

    cout << "Enter size of Array : ";
    cin >> size;

    cout << "Enter Elements of Array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    do
    {
        cout << endl
             << "choose one of these :" << endl
             << "1 - Traverse" << endl
             << "2 - Insertion" << endl
             << "3 - Deletion" << endl
             << "0 - Exit" << endl;
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << endl
                 << "Elements of Array are : " << endl;
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            break;

        case 2:
            int inc_choice, num;
            cout << endl
                 << "1 for Beginning" << endl
                 << "2 for End" << endl
                 << "3 for Random position" << endl;
            cout << endl
                 << "Enter choice for Insertion : ";
            cin >> inc_choice;
            cout << "Enter Number That you want to insert : ";
            cin >> num;
            size++;
            if (inc_choice == 1)
            {
                insert_at_beginning(arr, num, size);
            }
            else if (inc_choice == 2)
            {
                insert_at_end(arr, num, size);
            }
            else if (inc_choice == 3)
            {
                int position;
                cout << "Enter position : ";
                cin >> position;
                insert_at_random_pos(arr, num, size, position);
            }
            break;
        case 3:
            int pos;
            cout << "Enter position From Where you want to delete Element : ";
            cin >> pos;
            if (pos < 0 || pos > size)
            {
                cout << "Invalid position input " << endl;
            }
            else
            {
                delete_element(arr, pos, size);
                size--;
            }
            break;

        case 0:
            break;

        default:
            cout << "wait";
            break;
        }
    } while (choice != 0);

    return 0;
}

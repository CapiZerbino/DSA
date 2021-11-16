// #include <iostream>
// #include <sstream>
// using namespace std;

// template <class T>
// class SLinkedList
// {
// public:
//     class Node; // Forward declaration
// protected:
//     Node *head;
//     Node *tail;
//     int count;

// public:
//     SLinkedList()
//     {
//         this->head = nullptr;
//         this->tail = nullptr;
//         this->count = 0;
//     }
//     ~SLinkedList(){};
//     void add(T e)
//     {
//         Node *pNew = new Node(e);

//         if (this->count == 0)
//         {
//             this->head = this->tail = pNew;
//         }
//         else
//         {
//             this->tail->next = pNew;
//             this->tail = pNew;
//         }

//         this->count++;
//     }
//     int size()
//     {
//         return this->count;
//     }
//     void printList()
//     {
//         stringstream ss;
//         ss << "[";
//         Node *ptr = head;
//         while (ptr != tail)
//         {
//             ss << ptr->data << ",";
//             ptr = ptr->next;
//         }

//         if (count > 0)
//             ss << ptr->data << "]";
//         else
//             ss << "]";
//         cout << ss.str() << endl;
//     }

// public:
//     class Node
//     {
//     private:
//         T data;
//         Node *next;
//         friend class SLinkedList<T>;

//     public:
//         Node()
//         {
//             next = 0;
//         }
//         Node(T data)
//         {
//             this->data = data;
//             this->next = nullptr;
//         }
//     };

//     void bubbleSort();
// };

// template <class T>
// void SLinkedList<T>::bubbleSort()
// {
//     int swapped;
//     Node *current;
//     Node *last = NULL;
//     if (head == NULL)
//         return;
//     do
//     {
//         swapped = 0;
//         current = head;
//         while (current->next != last)
//         {
//             if (current->data > current->next->data)
//             {
//                 T temp = current->data;
//                 current->data = current->next->data;
//                 current->next->data = temp;
//                 swapped = 1;
//             }
//             current = current->next;
//         }
//         last = current;
//         //head_new = current;
//         if (swapped != 0)
//         {
//             printList();
//         }

//     } while (swapped);
// }

// int main()
// {
//     int arr[] = {9, 2, 8, 4, 1};
//     SLinkedList<int> list;
//     for (int i = 0; i < int(sizeof(arr)) / 4; i++)
//         list.add(arr[i]);
//     list.bubbleSort();
// }

#include "iostream"
#include "math.h"
using namespace std;


int jumpSearch(int arr[], int x, int n)
{
    // TODO: print the traversed indexes and return the index of value x in array if x is found, otherwise, return -1.
    int i = 0;
   int m = sqrt(n); //initializing block size= √(n)
    cout << arr[m] << " ";
   while(arr[m] <= x && m < n) { 
      // the control will continue to jump the blocks 
      i = m;  // shift the block
      m += sqrt(n);
      cout << arr[m] << " ";
      if(m > n - 1)  // if m exceeds the array size
         return -1; 
   }

   for(int j = i; j<m; j++) { //linear search in current block
      if(arr[j] == x)
         return j; //position of element being searched 
   }
   return -1;
}

int main()
{
    int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 611, 612, 613};
    int x = 612;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = jumpSearch(arr, x, n);

    if (index != -1)
    {
        cout << "\nNumber " << x << " is at index " << index;
    }
    else
    {
        cout << "\n"
             << x << " is not in array!";
    }
}
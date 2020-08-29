#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Format: vector<DataType> nameofvector
    vector<int> myVector;

    //myVector.push_value() ==> add an element to the end of vector, also resizes it.
    //myVector.at(index) ==> return element at specified index number.
    //myVector.size() ==> returns an unsigned int equal to the number of elements.
    //myVector.begin() ==> reads vecctor from first element (index 0).
    //myVector.insert(myVector.begin() + integer,nre value) ==> adds element before specified index number.
    //myVector.erase(myVector.begin()+integer) ==> removes elements at specified index
    //myVector.clear() ==> removes all elements in vector.
    //myVector.empty() ==> returns boolean value if vector is empty.




    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(4);
    myVector.push_back(12);
    myVector.push_back(9);

    cout <<"Vector:";

    for (unsigned int i=0; i <myVector.size();i++)
    {
        cout <<myVector[i] <<" ";
    }

    myVector.insert(myVector.begin()+3,5);

    cout <<endl<<"Vector:";

    for (unsigned int i=0; i <myVector.size();i++)
    {
        cout <<myVector[i] <<" ";
    }

    myVector.erase(myVector.begin()+4);
    cout <<endl <<"Vector:";

    for (unsigned int i=0; i <myVector.size();i++)
    {
        cout <<myVector[i] <<" ";
    }


    cout <<endl;

    return 0;
}

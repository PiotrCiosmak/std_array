#include <iostream>
#include <array>

int main()
{
    using std::array;
    using std::cout;
    using std::cin;
    using std::endl;

    //Declare
    array<int, 5> my_array;

    //Initialization
    array<int, 5> my_array_1 = {1, 2, 3, 4, 5}; //initializer list
    array<int, 5> my_array_2{1, 2, 3, 4, 5}; //uniform initialization

    //Assign using initializer list
    array<int, 5> my_array_3;
    my_array_3 = {1, 2, 3, 4, 5};

    cout << "First element: " << my_array_1.front() << endl;

    cout << "Last element: " << my_array_1.back() << endl;

    cout << "Second element: " << my_array_1.at(2) << endl;

    cout << "Third element: " << my_array_1[3] << endl;

    cout << "Address of the array (first element) array.data(): " << my_array_1.data() << endl;

}

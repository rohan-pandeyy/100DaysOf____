1. Capacity Functions:
- `size()`: Returns the number of elements in the vector.
- `max_size()`: Returns the maximum possible number of elements the vector can hold. 
- `capacity()`: Returns the current allocated storage capacity of the vector. 
- `resize(n)`: Resizes the vector to contain `n` elements.
- `empty()`: Returns `true` if the vector is empty, `false` otherwise.
- `reserve(n)`: Requests that the vector capacity be at least `n`.
- `shrink_to_fit()`: Reduces the capacity to fit the current size.
2. Element Access Functions:
- `operator[]`: Provides direct access to elements using an index.
- `at()`: Provides bounds-checked access to elements using an index.
- `front()`: Returns a reference to the first element.
- `back()`: Returns a reference to the last element.
- `data()`: Returns a pointer to the underlying array.
3. Modifiers:
- `assign()`: Assigns new content to the vector.
- `push_back()`: Adds an element to the end.
- `pop_back()`: Removes the last element.
- `insert()`: Inserts elements at a specified position.
- `erase()`: Removes elements from a specified range or position.
- `clear()`: Removes all elements.
- `emplace()`: Constructs and inserts an element at a specified position.
- `emplace_back()`: Constructs and inserts an element at the end.
- `swap()`: Swaps the content of two vectors.
4. Iterators:
- `begin()`: Returns an iterator to the first element.
- `end()`: Returns an iterator to the past-the-end element.
- `rbegin()`: Returns a reverse iterator to the last element.
- `rend()`: Returns a reverse iterator to the theoretical element before the first.
- `cbegin()`, `cend()`, `crbegin()`, `crend()`: Constant versions of the above - iterators.
5. Allocator Function:
- `get_allocator()`: Returns a copy of the allocator object used by the vector. 
6. Constructors and Destructor:
- `vector::vector()`: Various constructors to initialize a vector.
- `vector::~vector()`: Destructor to deallocate memory.
7. Non-member Functions (Overloaded Operators):
- `operator==`, `operator!=`, `operator<`, `operator<=`, `operator>`, `operator>=`: Relational operators for comparing vectors.
- `std::swap(std::vector)`: Specialization of `std::swap` for vectors.
- `erase(std::vector)` and `erase_if(std::vector)` (C++20): Global functions for erasing elements.
fn stack() {
    let x = 5; // x is stored on the stack
    let y = 4; // y is also stored on the stack
    let z = x + y; // z is computed and stored on the stack
    // vector and string are not stored in a stack frame.
    // They are stored on the heap, since they can grow or decrease in size.
    // however, the address of the vector and string is stored on the stack.
}

fn heap() {
    //heap is slower than stack, but it can store large amounts of data.
    let v = vec![1, 2, 3]; // v is a vector stored on the heap
    let s1: String = String::from("Hello"); // s1 is a string stored on the heap
    print!("s1: {}", s1);
    // a stack frame is created for the function call, and the vector and string are stored on the heap.
    // the stack frame stores the address of the vector and string in the heap.
    // when the function returns, the stack frame is popped off the stack, and the vector
}
pub(crate) fn main() {
    stack();
    heap();
}
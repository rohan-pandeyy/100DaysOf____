pub(crate) fn mutability() {
    let mut x = 5; // Declare x as mutable
    println!("x is: {}", x);
    x = 6; // This line allows x to be changed because it is mutable
    println!("x is: {}", x);
    let y = 10; // y is immutable
    println!("y is: {}", y); // y cannot be changed, as it is immutable
    // y = 15; // Uncommenting this line will cause a compile-time error because y is immutable
}
// pub(crate) fn main() {
//     let s1 = String::from("hello");
//     print!("s1: {}", s1); // s1 is valid here
//     let s2 = s1;
//     println!("s2: {}", s2); // s1 is moved to s2, so s1 is no longer valid
//     create_str();
//     print!("{}", 2);
// }

fn create_str() {
    let s1: String = String :: from("Hi there");
    print!("{}", s1);
    let s2: String = s1;
    println!("{}", s2);
}

//////////////////////////////////////////////////
// Ownership Example
//////////////////////////////////////////////////

// pub(crate) fn main() {
//     let my_string = String::from("hello");
//     takes_ownership(my_string);
//     println!("{}", my_string); // This line would cause a compile error because ownership has been moved.
// }

// fn takes_ownership(some_string: String) {
//     println!("{}", some_string); // `some_string` now owns the data.
// }

///////////////////////////////////////////////////
// Ownership Example with Clone
// This allows us to use the original string after passing it to the function.
///////////////////////////////////////////////////

// pub(crate) fn main() {
    //     let my_string = String::from("hello");
    //     takes_ownership(my_string.clone());
    //     println!("{}", my_string); // This line would cause a compile error because ownership has been moved.
    // }
    
    // fn takes_ownership(some_string: String) {
        //     println!("{}", some_string); // `some_string` now owns the data.
        // }
        
///////////////////////////////////////////////////
// Ownership Example with Function Return
///////////////////////////////////////////////////

pub(crate) fn main() {
    let mut my_string: String = String :: from("hello");
    my_string = takes_ownership( my_string);
    println!("{}", my_string); // This line would cause a compile error because ownership has been moved
}

fn takes_ownership(some_string: String) -> String {
    println! ("{}", some_string); // `some_string' now owns the data.
    return some_string;
}
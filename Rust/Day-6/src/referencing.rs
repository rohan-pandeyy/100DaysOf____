pub(crate) fn main() {
    let s = String::from("Hello, Rust!");
    let r1 = &s; // Immutable reference
    let r2 = &s; // Another immutable reference
    println!("{} and {}", r1, s); // Both references can be used simultaneously
}
pub(crate) fn numbers() {
    let x: i8 = 5; // Immutable variable (signed 8-bit integer, can be negative)
    println!("The value of x is: {}", x);

    let mut y: u8 = 10; // Mutable variable (unsigned 8-bit integer, cannot be negative)
    println!("The value of y is: {}", y);
    
    y += 5; // Modify the mutable variable
    println!("The new value of y is: {}", y);
}

pub(crate) fn boolean() {
    let is_male: bool = true; // Boolean variable
    let is_above_18: bool = true;

    // let is_above_18 = false; // All variables are immutable by deafult
    
    if is_male {
        if is_above_18 {
            println!("You are a legal male.")
        } else {
            println!("You are a male.")
        }
    } else {
        println!("You are a female.")
    }
}

pub(crate) fn strings() {
    let greeting: String = String::from("This output was from string!");
    println!("{}", greeting);
}
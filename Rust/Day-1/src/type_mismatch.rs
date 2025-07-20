pub(crate) fn type_mismatch() {
    let x: i8 = 1;
    // x = "2"; // This line will cause a compilation error because of type mismatch
    let y: i8 = -128;
    let z: f32 = 1000.001; // default is f64, but we specify f32 here
    
    println!("x: {}", x);
    println!("y: {}", y);
    println!("z: {}", z);
}
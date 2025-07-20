pub(crate) fn functions() {
    let a: i32 = 10;
    let b: i32 = 20;
    let sum: i32 = do_sum(a, b);
    println!("The sum of {} and {} is: {}", a, b, sum);
}


fn do_sum(a: i32, b: i32) -> i32 {
    return a + b;
}
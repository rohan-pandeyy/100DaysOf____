struct User {
    name: String,
    age: u32,
    active: bool
}

pub(crate) fn main() {
    let user = User {
        name: String::from("Alice"),
        age: 30,
        active: true,
    };

    println!("User: {}, Age: {}, Active: {}", user.name, user.age, user.active);
}
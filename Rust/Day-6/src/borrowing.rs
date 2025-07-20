pub(crate) fn main() {
    let mut s1: String = String :: from("Hello");
    s1.push_str(" World");
    update_string(&mut s1);
    print! ("{}", s1);
}

fn update_string(s: &mut String) {
    s.push_str(" from Rust!");
}

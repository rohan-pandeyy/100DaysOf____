struct Rect {
    width: u32,
    height: u32,
}

impl Rect {
    fn area(&self) -> u32 {
        self.width * self.height
    }
}

pub(crate) fn main() {
    let rect = Rect {
        width: 30,
        height: 50,
    };

    println!("The area of the rectangle is {} square pixels.", rect.area());
}
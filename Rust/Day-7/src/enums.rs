enum Direction {
    North,
    East,
    South,
    West,
}

pub(crate) fn main() {
    let my_direction = Direction::North;
    let new_direction = my_direction; // No error, because Direction is Copy
    move_around(new_direction);
}

fn move_around(direction: Direction) {
    // implements logic to move a character around
}

// fn main() {
//     move_around("north".to_string());
// }

// fn move_around(direction: String) {
//     if direction == "north" {
//         println!("Moving North");
//     }
// }
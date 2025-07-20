mod mutability;
mod stack_heap;
mod memory_in_action;

fn main() {
    mutability::mutability();
    stack_heap::main();
    memory_in_action::main();
}

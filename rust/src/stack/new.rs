#[derive(Debug)]
enum Direction {
    Up,
    Down,
}

#[derive(Debug)]
pub struct Stack {
    content: Vec<i32>,
    direction: Direction,
    pin: usize,
}

impl Stack {
    pub fn new(list: Option<Vec<i32>>) -> Self {
        match list {
            Some(content) => Self {
                content,
                direction: Direction::Up,
                pin: 0,
            },
            None => Self {
                content: Vec::new(),
                direction: Direction::Up,
                pin: 0,
            },
        }
    }
}

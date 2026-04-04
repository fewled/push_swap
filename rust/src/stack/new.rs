#[derive(Debug)]
pub struct Stack {
    pub(crate) content: Vec<i32>,
}

impl Stack {
    pub fn new(list: Option<Vec<i32>>) -> Self {
        match list {
            Some(content) => Self { content },
            None => Self {
                content: Vec::new(),
            },
        }
    }
}

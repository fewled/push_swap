use super::new::Stack;

impl Stack {
    pub fn rev_rotate(&mut self) {
        if self.content.len() > 1 {
            let first_element = self.content.pop().unwrap();
            self.content.insert(0, first_element);
        }
    }
}

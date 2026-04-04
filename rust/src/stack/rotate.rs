use super::new::Stack;

impl Stack {
    pub fn rotate(&mut self) {
        if self.content.len() > 1 {
            let first_element = self.content.remove(0);
            self.content.push(first_element);
        }
    }
}

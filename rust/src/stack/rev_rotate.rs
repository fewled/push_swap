use super::new::Stack;

impl Stack {
    pub fn rev_rotate(&mut self) {
        let content = self.get_content();
        if content.len() > 1 {
            let first_element = content.pop().unwrap();
            content.insert(0, first_element);
        }
    }
}

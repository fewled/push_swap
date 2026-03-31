use super::new::Stack;

impl Stack {
    pub fn rotate(&mut self) {
        let content = self.get_content();
        if content.len() > 1 {
            let first_element = content.remove(0);
            content.push(first_element);
        }
    }
}

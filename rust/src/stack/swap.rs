use super::new::Stack;

impl Stack {
    pub fn swap(&mut self) {
        let content = self.get_content();
        if content.len() > 1 {
            let temp = content[0];
            content[0] = content[1];
            content[1] = temp;
        }
    }
}

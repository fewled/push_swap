use super::new::Stack;

impl Stack {
    pub fn swap(&mut self) {
        if self.content.len() > 1 {
            let temp = self.content[0];
            self.content[0] = self.content[1];
            self.content[1] = temp;
        }
    }
}

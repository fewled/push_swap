use super::Package;

impl Package {
    pub fn inject(&mut self) -> &mut Self {
        if self.a.content.len() > 4 {
            self.pb();
        }
        if self.a.content.len() > 3 {
            self.pb();
        }
        self
    }
}

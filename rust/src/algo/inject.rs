use super::Package;

impl Package {
    pub fn inject(&mut self) -> &mut Self {
        if self.get_a().get_content().len() > 4 {
            self.pb();
        }
        if self.get_a().get_content().len() > 3 {
            self.pb();
        }
        self
    }
}

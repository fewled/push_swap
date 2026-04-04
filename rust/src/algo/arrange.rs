use super::Package;

impl Package {
    pub fn arrange(&mut self) -> &mut Self {
        let top = self.a.content[0];
        let mid = self.a.content[1];
        let bot = self.a.content[2];
        if top > mid && mid < bot && top < bot {
            self.sa();
        } else if top > mid && mid > bot {
            self.sa();
            self.rra();
        } else if top > mid && mid < bot && top > bot {
            self.ra();
        } else if top < mid && mid > bot && top < bot {
            self.sa();
            self.ra();
        } else if top < mid && mid > bot && top > bot {
            self.rra();
        }
        self
    }
}

use super::new::Package;

impl Package {
    pub fn pa(&mut self) {
        let value = self.get_b().get_content().remove(0);
        self.get_a().get_content().insert(0, value);
        println!("pa");
    }
    pub fn pb(&mut self) {
        let value = self.get_a().get_content().remove(0);
        self.get_b().get_content().insert(0, value);
        println!("pb");
    }
    pub fn sa(&mut self) {
        self.get_a().swap();
        println!("sa");
    }
    pub fn sb(&mut self) {
        self.get_b().swap();
        println!("sb");
    }
    pub fn ra(&mut self) {
        self.get_a().rotate();
        println!("ra");
    }
    pub fn rb(&mut self) {
        self.get_b().rotate();
        println!("rb");
    }
    pub fn rr(&mut self) {
        self.get_a().rotate();
        self.get_b().rotate();
        println!("rr");
    }
    pub fn rra(&mut self) {
        self.get_a().rev_rotate();
        println!("rra");
    }
    pub fn rrb(&mut self) {
        self.get_b().rev_rotate();
        println!("rrb");
    }
    pub fn rrr(&mut self) {
        self.get_a().rev_rotate();
        self.get_b().rev_rotate();
        println!("rrr");
    }
}

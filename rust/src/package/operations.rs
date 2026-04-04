use super::Package;

impl Package {
    pub fn pa(&mut self) {
        let value = self.b.content.remove(0);
        self.a.content.insert(0, value);
        println!("pa");
    }
    pub fn pb(&mut self) {
        let value = self.a.content.remove(0);
        self.b.content.insert(0, value);
        println!("pb");
    }
    pub fn sa(&mut self) {
        self.a.swap();
        println!("sa");
    }
    pub fn sb(&mut self) {
        self.b.swap();
        println!("sb");
    }
    pub fn ra(&mut self) {
        self.a.rotate();
        println!("ra");
    }
    pub fn rb(&mut self) {
        self.b.rotate();
        println!("rb");
    }
    pub fn rr(&mut self) {
        self.a.rotate();
        self.b.rotate();
        println!("rr");
    }
    pub fn rra(&mut self) {
        self.a.rev_rotate();
        println!("rra");
    }
    pub fn rrb(&mut self) {
        self.b.rev_rotate();
        println!("rrb");
    }
    pub fn rrr(&mut self) {
        self.a.rev_rotate();
        self.b.rev_rotate();
        println!("rrr");
    }
}

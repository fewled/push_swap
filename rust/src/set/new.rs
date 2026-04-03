#[derive(Debug)]
pub struct Set {
    acost: usize,
    bcost: usize,
    cost: usize,
    apin: usize,
    bpin: usize,
    aval: i32,
    bval: i32,
    adir: bool,
    bdir: bool,
}

impl Set {
    pub fn new() -> Self {
        Self {
            acost: 0,
            bcost: 0,
            cost: 0,
            apin: 0,
            bpin: 0,
            aval: 0,
            bval: 0,
            adir: false,
            bdir: false,
        }
    }
    pub fn set_acost(&mut self, new_acost: usize) {
        self.acost = new_acost;
    }
    pub fn set_bcost(&mut self, new_bcost: usize) {
        self.bcost = new_bcost;
    }
    pub fn set_cost(&mut self, new_cost: usize) {
        self.cost = new_cost;
    }
    pub fn get_apin(&self) -> usize {
        self.apin
    }
    pub fn set_apin(&mut self, new_apin: usize) {
        self.apin = new_apin;
    }
    pub fn get_bpin(&self) -> usize {
        self.bpin
    }
    pub fn set_bpin(&mut self, new_bpin: usize) {
        self.bpin = new_bpin;
    }
    pub fn set_aval(&mut self, new_aval: i32) {
        self.aval = new_aval;
    }
    pub fn set_bval(&mut self, new_bval: i32) {
        self.bval = new_bval;
    }
    pub fn set_adir(&mut self, new_adir: bool) {
        self.adir = new_adir;
    }
    pub fn set_bdir(&mut self, new_bdir: bool) {
        self.bdir = new_bdir;
    }
}

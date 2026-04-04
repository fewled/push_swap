use super::Package;

impl Package {
    pub fn transfer(&mut self) -> &mut Self {
        let mut index: usize;
        while self.a.content.len() > 3 {
            index = 0;
            while index < self.a.content.len() {
                self.get_closest(index)
                    .get_directions()
                    .get_individual_cost()
                    .get_compared_cost()
                    .compare_moves();
                index += 1;
            }
            self.apply_move();
        }
        self
    }
    fn get_closest(&mut self, index: usize) -> &mut Self {
        let mut min_diff: i32 = self.a.content[index] - self.b.content[index];
        self.current.apin = index;
        self.current.aval = self.a.content[index];
        self.current.bpin = 0;
        self.current.bval = self.b.content[0];
        for (pin, element) in self.b.content.iter().enumerate() {
            if (self.a.content[index] - element).abs() < min_diff {
                min_diff = (self.a.content[index] - element).abs();
                self.current.bval = *element;
                self.current.bpin = pin;
            }
        }
        self
    }
    fn get_directions(&mut self) -> &mut Self {
        self.current.adir = true;
        if self.current.apin > self.a.content.len() / 2 {
            self.current.adir = false;
        }
        self.current.bdir = false;
        if self.current.bpin > self.b.content.len() / 2 {
            self.current.bdir = false;
        }
        self
    }
    fn get_individual_cost(&mut self) -> &mut Self {
        match self.current.adir {
            true => self.current.acost = self.current.apin,
            false => self.current.acost = (self.a.content.len() - 1) - self.current.apin + 1,
        }
        match self.current.bdir {
            true => self.current.bcost = self.current.bpin,
            false => self.current.bcost = (self.b.content.len() - 1) - self.current.bpin + 1,
        }
        if self.current.aval < self.current.bval {
            self.current.bcost += 1;
        }
        self
    }
    fn get_compared_cost(&mut self) -> &mut Self {
        self
    }
    fn compare_moves(&mut self) -> &mut Self {
        if self.current.cost < self.best.cost || self.best.cost == 0 {
            self.best.cost = self.current.cost;
            self.best.acost = self.current.acost;
            self.best.bcost = self.current.bcost;
            self.best.aval = self.current.aval;
            self.best.bval = self.current.bval;
            self.best.apin = self.current.apin;
            self.best.bpin = self.current.bpin;
            self.best.adir = self.current.adir;
            self.best.bdir = self.current.bdir;
        }
        self
    }
    fn apply_move(&mut self) {}
}

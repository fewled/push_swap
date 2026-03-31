use super::Package;

impl Package {
    pub fn transfer(&mut self) -> &mut Self {
        while self.get_a().get_content().len() > 3 {
            let mut index: usize = 0;
            while index < self.get_a().get_content().len() {
                self.get_closest()
                    .get_directions()
                    .get_individual_cost()
                    .get_compared_cost()
                    .compare_moves()
                    .apply_move();
                index += 1;
            }
        }
        self
    }

    fn get_closest(&mut self) -> &mut Self {
        self
    }
    fn get_directions(&mut self) -> &mut Self {
        self
    }
    fn get_individual_cost(&mut self) -> &mut Self {
        self
    }
    fn get_compared_cost(&mut self) -> &mut Self {
        self
    }
    fn compare_moves(&mut self) -> &mut Self {
        self
    }
    fn apply_move(&mut self) {}
}

use super::Package;

impl Package {
    pub fn transfer(&mut self) -> &mut Self {
        // while self.get_a().get_content().len() > 3 {
        // 	let mut index: usize = 0;
        //     while index < self.get_a().get_content().len() {
        //         self.get_closest(index)
        //             .get_directions()
        //             .get_individual_cost()
        //             .get_compared_cost()
        //             .compare_moves()
        //             .apply_move();
        //         index += 1;
        //     }
        // }
        self.get_closest(0)
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
    fn _get_directions(&mut self) -> &mut Self {
        self
    }
    fn _get_individual_cost(&mut self) -> &mut Self {
        self
    }
    fn _get_compared_cost(&mut self) -> &mut Self {
        self
    }
    fn _compare_moves(&mut self) -> &mut Self {
        self
    }
    fn _apply_move(&mut self) {}
}

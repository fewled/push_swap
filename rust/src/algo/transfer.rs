use super::{Package, Set};

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
        self.get_closest(0).get_directions()
    }

    fn get_closest(&mut self, index: usize) -> &mut Self {
        let value: i32;
        let content: &mut Vec<i32>;
        let mut best_match: i32;
        let mut min_diff: i32;
        let mut min_index: usize;
        let set: &mut Set;

        value = self.get_a().get_content()[index];
        content = self.get_b().get_content();
        best_match = content[index];
        min_diff = value - content[index];
        min_index = 0;
        for (index, element) in content.iter().enumerate() {
            if (value - element).abs() < min_diff {
                min_diff = (value - element).abs();
                best_match = *element;
                min_index = index;
            }
        }
        set = self.get_current();
        set.set_apin(index);
        set.set_aval(value);
        set.set_bpin(min_index);
        set.set_bval(best_match);
        self
    }
    fn get_directions(&mut self) -> &mut Self {
        let a_size: usize;
        let b_size: usize;
        let set: &mut Set;

        a_size = self.get_a().get_content().len();
        b_size = self.get_b().get_content().len();
        set = self.get_current();
        set.set_adir(true);
        if set.get_apin() > a_size / 2 {
            set.set_adir(false);
        }
        set.set_bdir(true);
        if set.get_bpin() > b_size / 2 {
            set.set_bdir(false);
        }
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

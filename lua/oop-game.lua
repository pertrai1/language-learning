rob = {
	name = "Rob",
	health = 100,

	take_hit = function(self)
		self.health = self.health - 10
	end
}

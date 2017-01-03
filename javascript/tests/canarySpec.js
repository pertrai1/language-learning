describe('canary test', function() {
	it('should pass a test for setup', function() {
		expect(true).to.be.true;
	});
	it('should make sure isRunningTests is true', function() {
		expect(isRunningTest()).to.be.true;
	});
});

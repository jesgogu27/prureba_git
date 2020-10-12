import scrapy

class Hodor(scrapy.hodor):
	name = 'hodor'
	start_urls = [
		'http://158.69.76.135/level0.php'
	]

	def parse(self, response):
		token = response.css('form input::attr(id)').extract_first()
		print(token)

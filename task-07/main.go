package main

import (
	"encoding/csv"
	"log"
	"os"

	"github.com/gocolly/colly"
)

func main() {

	fName := "rich.csv"
	file, err := os.Create(fName)
	if err != nil {
		log.Fatalf("err :%q", err)
		return
	}
	defer file.Close()

	writer := csv.NewWriter(file)
	defer writer.Flush()

	c := colly.NewCollector(
		colly.AllowedDomains("forbes.com", "www.forbes.com"),
	)

	c.OnHTML(".ng-scope.ng-table", func(e *colly.HTMLElement) {
		writer.Write([]string{
			e.Attr("td"),
			e.ChildText("a"),
			e.ChildText("span"),
		})
	})

	c.Visit("https://www.forbes.com/real-time-billionaires/")
	log.Println(c)

}

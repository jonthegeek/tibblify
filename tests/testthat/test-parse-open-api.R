test_that("can parse open api spec", {
  skip_on_cran()
  skip_if(getRversion() < "3.6")
  expect_no_error(
    # suppress `incomplete final line` warning
    suppressWarnings(
      parse_openapi_spec("https://dtrnk0o2zy01c.cloudfront.net/openapi/en-us/dest/SponsoredProducts_prod_3p.json")
    )
  )

  # TODO: More tests! Some URLs that previously failed:
  # * "https://api.apis.guru/v2/specs/slack.com/1.7.0/openapi.json"
  # * "https://api.apis.guru/v2/specs/sportsdata.io/csgo-v3-scores/1.0/openapi.json"
  # * "https://mapineqfeatures.web.rug.nl/api.json"
})

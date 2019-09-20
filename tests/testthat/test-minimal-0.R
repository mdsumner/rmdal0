test_that("minimal lib function works", {
  expect_output(rmdal0(), "mdalinfo 0") %>% expect_equal(2.0)
})

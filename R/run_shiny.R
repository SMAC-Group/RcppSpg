#' @title Shiny app for St-Petersburg paradox games
#'
#' @description Run a shiny app for St-Petersburg paradox games
#'
#' @export
run_shiny <- function(){
  appDir <- system.file("shiny", package="RcppSpg")
  shiny::runApp(appDir, display.mode = "normal")
}

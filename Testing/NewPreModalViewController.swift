//
//  NewPreModalViewController.swift
//  Testing
//
//  Created by Emmanuel Casanas Cruz on 6/20/19.
//  Copyright © 2019 Emmanuel Cruz. All rights reserved.
//

import UIKit
import BonnusSDK

class NewPreModalViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

    @IBAction func showModalView(_ sender: Any) {
        let modalViewController = ModalViewController()
        self.present(modalViewController, animated: true) {
            
        }
    }
    
}
